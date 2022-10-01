// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEGROUPSRESPONSE_H
#define QTAWS_MODIFYINSTANCEGROUPSRESPONSE_H

#include "emrresponse.h"
#include "modifyinstancegroupsrequest.h"

namespace QtAws {
namespace Emr {

class ModifyInstanceGroupsResponsePrivate;

class QTAWSEMR_EXPORT ModifyInstanceGroupsResponse : public EmrResponse {
    Q_OBJECT

public:
    ModifyInstanceGroupsResponse(const ModifyInstanceGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyInstanceGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceGroupsResponse)
    Q_DISABLE_COPY(ModifyInstanceGroupsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
