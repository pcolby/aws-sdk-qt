// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTSECURITYGROUPSRESPONSE_H
#define QTAWS_LISTINPUTSECURITYGROUPSRESPONSE_H

#include "medialiveresponse.h"
#include "listinputsecuritygroupsrequest.h"

namespace QtAws {
namespace MediaLive {

class ListInputSecurityGroupsResponsePrivate;

class QTAWSMEDIALIVE_EXPORT ListInputSecurityGroupsResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    ListInputSecurityGroupsResponse(const ListInputSecurityGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInputSecurityGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInputSecurityGroupsResponse)
    Q_DISABLE_COPY(ListInputSecurityGroupsResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
