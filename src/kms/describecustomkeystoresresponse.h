// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMKEYSTORESRESPONSE_H
#define QTAWS_DESCRIBECUSTOMKEYSTORESRESPONSE_H

#include "kmsresponse.h"
#include "describecustomkeystoresrequest.h"

namespace QtAws {
namespace Kms {

class DescribeCustomKeyStoresResponsePrivate;

class QTAWSKMS_EXPORT DescribeCustomKeyStoresResponse : public KmsResponse {
    Q_OBJECT

public:
    DescribeCustomKeyStoresResponse(const DescribeCustomKeyStoresRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCustomKeyStoresRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomKeyStoresResponse)
    Q_DISABLE_COPY(DescribeCustomKeyStoresResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
