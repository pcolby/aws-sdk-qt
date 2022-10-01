// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHTEMPLATEVERSIONSRESPONSE_H
#define QTAWS_DELETELAUNCHTEMPLATEVERSIONSRESPONSE_H

#include "ec2response.h"
#include "deletelaunchtemplateversionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteLaunchTemplateVersionsResponsePrivate;

class QTAWSEC2_EXPORT DeleteLaunchTemplateVersionsResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteLaunchTemplateVersionsResponse(const DeleteLaunchTemplateVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLaunchTemplateVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLaunchTemplateVersionsResponse)
    Q_DISABLE_COPY(DeleteLaunchTemplateVersionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
