// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYEBSDEFAULTKMSKEYIDRESPONSE_H
#define QTAWS_MODIFYEBSDEFAULTKMSKEYIDRESPONSE_H

#include "ec2response.h"
#include "modifyebsdefaultkmskeyidrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyEbsDefaultKmsKeyIdResponsePrivate;

class QTAWSEC2_EXPORT ModifyEbsDefaultKmsKeyIdResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyEbsDefaultKmsKeyIdResponse(const ModifyEbsDefaultKmsKeyIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyEbsDefaultKmsKeyIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyEbsDefaultKmsKeyIdResponse)
    Q_DISABLE_COPY(ModifyEbsDefaultKmsKeyIdResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
