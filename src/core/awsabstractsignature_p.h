/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSABSTRACTSIGNATURE_P_H
#define AWSABSTRACTSIGNATURE_P_H

#include "qtawsglobal.h"

#include <QNetworkAccessManager>
#include <QUrlQuery>

namespace QtAws {
namespace Core {

class AwsAbstractSignature;

class AwsAbstractSignaturePrivate {

public:
    virtual ~AwsAbstractSignaturePrivate();

    AwsAbstractSignaturePrivate(AwsAbstractSignature * const q);

    QString canonicalPath(const QUrl &url) const;

    QByteArray canonicalQuery(const QUrlQuery &query) const;

    QString httpMethod(const QNetworkAccessManager::Operation operation) const;

    bool setQueryItem(QUrlQuery &query, const QString &key, const QString &value,
                      const bool warnOnNonIdenticalDuplicate = true) const;

protected:
    AwsAbstractSignature * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(AwsAbstractSignature)
    Q_DISABLE_COPY(AwsAbstractSignaturePrivate)
    friend class TestAwsAbstractSignature;
};

} // namespace Core
} // namespace QtAws

#endif
