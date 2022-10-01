// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDGROUPSRESPONSE_H
#define QTAWS_LISTASSOCIATEDGROUPSRESPONSE_H

#include "syntheticsresponse.h"
#include "listassociatedgroupsrequest.h"

namespace QtAws {
namespace Synthetics {

class ListAssociatedGroupsResponsePrivate;

class QTAWSSYNTHETICS_EXPORT ListAssociatedGroupsResponse : public SyntheticsResponse {
    Q_OBJECT

public:
    ListAssociatedGroupsResponse(const ListAssociatedGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssociatedGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociatedGroupsResponse)
    Q_DISABLE_COPY(ListAssociatedGroupsResponse)

};

} // namespace Synthetics
} // namespace QtAws

#endif
