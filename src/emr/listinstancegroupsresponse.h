// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEGROUPSRESPONSE_H
#define QTAWS_LISTINSTANCEGROUPSRESPONSE_H

#include "emrresponse.h"
#include "listinstancegroupsrequest.h"

namespace QtAws {
namespace Emr {

class ListInstanceGroupsResponsePrivate;

class QTAWSEMR_EXPORT ListInstanceGroupsResponse : public EmrResponse {
    Q_OBJECT

public:
    ListInstanceGroupsResponse(const ListInstanceGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInstanceGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstanceGroupsResponse)
    Q_DISABLE_COPY(ListInstanceGroupsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
