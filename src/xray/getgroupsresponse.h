// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPSRESPONSE_H
#define QTAWS_GETGROUPSRESPONSE_H

#include "xrayresponse.h"
#include "getgroupsrequest.h"

namespace QtAws {
namespace XRay {

class GetGroupsResponsePrivate;

class QTAWSXRAY_EXPORT GetGroupsResponse : public XRayResponse {
    Q_OBJECT

public:
    GetGroupsResponse(const GetGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupsResponse)
    Q_DISABLE_COPY(GetGroupsResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
