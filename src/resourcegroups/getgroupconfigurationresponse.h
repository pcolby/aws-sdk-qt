// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPCONFIGURATIONRESPONSE_H
#define QTAWS_GETGROUPCONFIGURATIONRESPONSE_H

#include "resourcegroupsresponse.h"
#include "getgroupconfigurationrequest.h"

namespace QtAws {
namespace ResourceGroups {

class GetGroupConfigurationResponsePrivate;

class QTAWSRESOURCEGROUPS_EXPORT GetGroupConfigurationResponse : public ResourceGroupsResponse {
    Q_OBJECT

public:
    GetGroupConfigurationResponse(const GetGroupConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGroupConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupConfigurationResponse)
    Q_DISABLE_COPY(GetGroupConfigurationResponse)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
