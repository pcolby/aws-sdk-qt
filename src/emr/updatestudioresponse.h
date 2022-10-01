// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTUDIORESPONSE_H
#define QTAWS_UPDATESTUDIORESPONSE_H

#include "emrresponse.h"
#include "updatestudiorequest.h"

namespace QtAws {
namespace Emr {

class UpdateStudioResponsePrivate;

class QTAWSEMR_EXPORT UpdateStudioResponse : public EmrResponse {
    Q_OBJECT

public:
    UpdateStudioResponse(const UpdateStudioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStudioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStudioResponse)
    Q_DISABLE_COPY(UpdateStudioResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
