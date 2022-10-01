// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGROUPCONFIGURATIONRESPONSE_H
#define QTAWS_PUTGROUPCONFIGURATIONRESPONSE_H

#include "resourcegroupsresponse.h"
#include "putgroupconfigurationrequest.h"

namespace QtAws {
namespace ResourceGroups {

class PutGroupConfigurationResponsePrivate;

class QTAWSRESOURCEGROUPS_EXPORT PutGroupConfigurationResponse : public ResourceGroupsResponse {
    Q_OBJECT

public:
    PutGroupConfigurationResponse(const PutGroupConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutGroupConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutGroupConfigurationResponse)
    Q_DISABLE_COPY(PutGroupConfigurationResponse)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
