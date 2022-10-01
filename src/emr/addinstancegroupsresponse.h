// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDINSTANCEGROUPSRESPONSE_H
#define QTAWS_ADDINSTANCEGROUPSRESPONSE_H

#include "emrresponse.h"
#include "addinstancegroupsrequest.h"

namespace QtAws {
namespace Emr {

class AddInstanceGroupsResponsePrivate;

class QTAWSEMR_EXPORT AddInstanceGroupsResponse : public EmrResponse {
    Q_OBJECT

public:
    AddInstanceGroupsResponse(const AddInstanceGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddInstanceGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddInstanceGroupsResponse)
    Q_DISABLE_COPY(AddInstanceGroupsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
