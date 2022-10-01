// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEEVENTWINDOWRESPONSE_H
#define QTAWS_MODIFYINSTANCEEVENTWINDOWRESPONSE_H

#include "ec2response.h"
#include "modifyinstanceeventwindowrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceEventWindowResponsePrivate;

class QTAWSEC2_EXPORT ModifyInstanceEventWindowResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyInstanceEventWindowResponse(const ModifyInstanceEventWindowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyInstanceEventWindowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceEventWindowResponse)
    Q_DISABLE_COPY(ModifyInstanceEventWindowResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
