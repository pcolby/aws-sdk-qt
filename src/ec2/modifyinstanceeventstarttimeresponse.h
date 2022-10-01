// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEEVENTSTARTTIMERESPONSE_H
#define QTAWS_MODIFYINSTANCEEVENTSTARTTIMERESPONSE_H

#include "ec2response.h"
#include "modifyinstanceeventstarttimerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceEventStartTimeResponsePrivate;

class QTAWSEC2_EXPORT ModifyInstanceEventStartTimeResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyInstanceEventStartTimeResponse(const ModifyInstanceEventStartTimeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyInstanceEventStartTimeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceEventStartTimeResponse)
    Q_DISABLE_COPY(ModifyInstanceEventStartTimeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
