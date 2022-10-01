// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYRESPONSE_H
#define QTAWS_DESCRIBEKEYRESPONSE_H

#include "kmsresponse.h"
#include "describekeyrequest.h"

namespace QtAws {
namespace Kms {

class DescribeKeyResponsePrivate;

class QTAWSKMS_EXPORT DescribeKeyResponse : public KmsResponse {
    Q_OBJECT

public:
    DescribeKeyResponse(const DescribeKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeKeyResponse)
    Q_DISABLE_COPY(DescribeKeyResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
