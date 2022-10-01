// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEEVENTWINDOWRESPONSE_H
#define QTAWS_CREATEINSTANCEEVENTWINDOWRESPONSE_H

#include "ec2response.h"
#include "createinstanceeventwindowrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateInstanceEventWindowResponsePrivate;

class QTAWSEC2_EXPORT CreateInstanceEventWindowResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateInstanceEventWindowResponse(const CreateInstanceEventWindowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInstanceEventWindowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstanceEventWindowResponse)
    Q_DISABLE_COPY(CreateInstanceEventWindowResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
