// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTUDIOSESSIONMAPPINGRESPONSE_H
#define QTAWS_UPDATESTUDIOSESSIONMAPPINGRESPONSE_H

#include "emrresponse.h"
#include "updatestudiosessionmappingrequest.h"

namespace QtAws {
namespace Emr {

class UpdateStudioSessionMappingResponsePrivate;

class QTAWSEMR_EXPORT UpdateStudioSessionMappingResponse : public EmrResponse {
    Q_OBJECT

public:
    UpdateStudioSessionMappingResponse(const UpdateStudioSessionMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStudioSessionMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStudioSessionMappingResponse)
    Q_DISABLE_COPY(UpdateStudioSessionMappingResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
