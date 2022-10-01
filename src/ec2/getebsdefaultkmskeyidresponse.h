// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEBSDEFAULTKMSKEYIDRESPONSE_H
#define QTAWS_GETEBSDEFAULTKMSKEYIDRESPONSE_H

#include "ec2response.h"
#include "getebsdefaultkmskeyidrequest.h"

namespace QtAws {
namespace Ec2 {

class GetEbsDefaultKmsKeyIdResponsePrivate;

class QTAWSEC2_EXPORT GetEbsDefaultKmsKeyIdResponse : public Ec2Response {
    Q_OBJECT

public:
    GetEbsDefaultKmsKeyIdResponse(const GetEbsDefaultKmsKeyIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEbsDefaultKmsKeyIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEbsDefaultKmsKeyIdResponse)
    Q_DISABLE_COPY(GetEbsDefaultKmsKeyIdResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
