// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEMANAGEMENTCIDRRANGESRESPONSE_H
#define QTAWS_LISTAVAILABLEMANAGEMENTCIDRRANGESRESPONSE_H

#include "workspacesresponse.h"
#include "listavailablemanagementcidrrangesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ListAvailableManagementCidrRangesResponsePrivate;

class QTAWSWORKSPACES_EXPORT ListAvailableManagementCidrRangesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    ListAvailableManagementCidrRangesResponse(const ListAvailableManagementCidrRangesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAvailableManagementCidrRangesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableManagementCidrRangesResponse)
    Q_DISABLE_COPY(ListAvailableManagementCidrRangesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
