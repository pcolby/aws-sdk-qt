// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHTEMPLATEVERSIONSRESPONSE_P_H
#define QTAWS_DELETELAUNCHTEMPLATEVERSIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteLaunchTemplateVersionsResponse;

class DeleteLaunchTemplateVersionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteLaunchTemplateVersionsResponsePrivate(DeleteLaunchTemplateVersionsResponse * const q);

    void parseDeleteLaunchTemplateVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLaunchTemplateVersionsResponse)
    Q_DISABLE_COPY(DeleteLaunchTemplateVersionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
