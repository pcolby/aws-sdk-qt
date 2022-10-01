// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDINSTANCEFLEETRESPONSE_H
#define QTAWS_ADDINSTANCEFLEETRESPONSE_H

#include "emrresponse.h"
#include "addinstancefleetrequest.h"

namespace QtAws {
namespace Emr {

class AddInstanceFleetResponsePrivate;

class QTAWSEMR_EXPORT AddInstanceFleetResponse : public EmrResponse {
    Q_OBJECT

public:
    AddInstanceFleetResponse(const AddInstanceFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddInstanceFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddInstanceFleetResponse)
    Q_DISABLE_COPY(AddInstanceFleetResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
