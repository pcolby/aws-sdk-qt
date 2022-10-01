// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSABSTRACTREQUEST_P_H
#define AWSABSTRACTREQUEST_P_H

#include "qtawscoreglobal.h"

#include <QNetworkAccessManager>
#include <QNetworkReply>

class QByteArray;
class QNetworkReply;

namespace QtAws {
namespace Core {

class AwsAbstractRequest;
class AwsAbstractResponse;

// Exported for *internal* use by other QtAws modules only.
class QTAWSCORE_EXPORT AwsAbstractRequestPrivate {

public:
    QByteArray data;                            ///< Data for POST/PUT operations.
    QNetworkAccessManager::Operation operation; ///< Network operation to use.

    explicit AwsAbstractRequestPrivate(AwsAbstractRequest * const q);
    AwsAbstractRequestPrivate(const AwsAbstractRequestPrivate &other,
                              AwsAbstractRequest * const q);

    virtual ~AwsAbstractRequestPrivate();

    virtual QNetworkReply *post(QNetworkAccessManager &manager,
                                const QNetworkRequest &request) const;
    virtual QNetworkReply *put(QNetworkAccessManager &manager,
                               const QNetworkRequest &request) const;

protected:
    AwsAbstractRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(AwsAbstractRequest)
    Q_DISABLE_COPY(AwsAbstractRequestPrivate)

};

} // namespace Core
} // namespace QtAws

#endif
