// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEMETADATAOPTIONSRESPONSE_H
#define QTAWS_MODIFYINSTANCEMETADATAOPTIONSRESPONSE_H

#include "ec2response.h"
#include "modifyinstancemetadataoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceMetadataOptionsResponsePrivate;

class QTAWSEC2_EXPORT ModifyInstanceMetadataOptionsResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyInstanceMetadataOptionsResponse(const ModifyInstanceMetadataOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyInstanceMetadataOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceMetadataOptionsResponse)
    Q_DISABLE_COPY(ModifyInstanceMetadataOptionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
