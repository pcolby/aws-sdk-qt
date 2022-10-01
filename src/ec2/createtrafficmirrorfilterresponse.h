// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICMIRRORFILTERRESPONSE_H
#define QTAWS_CREATETRAFFICMIRRORFILTERRESPONSE_H

#include "ec2response.h"
#include "createtrafficmirrorfilterrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTrafficMirrorFilterResponsePrivate;

class QTAWSEC2_EXPORT CreateTrafficMirrorFilterResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateTrafficMirrorFilterResponse(const CreateTrafficMirrorFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrafficMirrorFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrafficMirrorFilterResponse)
    Q_DISABLE_COPY(CreateTrafficMirrorFilterResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
