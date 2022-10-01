// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEPLACEMENTRESPONSE_H
#define QTAWS_MODIFYINSTANCEPLACEMENTRESPONSE_H

#include "ec2response.h"
#include "modifyinstanceplacementrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstancePlacementResponsePrivate;

class QTAWSEC2_EXPORT ModifyInstancePlacementResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyInstancePlacementResponse(const ModifyInstancePlacementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyInstancePlacementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstancePlacementResponse)
    Q_DISABLE_COPY(ModifyInstancePlacementResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
