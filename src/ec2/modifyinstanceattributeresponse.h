// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEATTRIBUTERESPONSE_H
#define QTAWS_MODIFYINSTANCEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "modifyinstanceattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceAttributeResponsePrivate;

class QTAWSEC2_EXPORT ModifyInstanceAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyInstanceAttributeResponse(const ModifyInstanceAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyInstanceAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceAttributeResponse)
    Q_DISABLE_COPY(ModifyInstanceAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
