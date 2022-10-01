// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOSESSIONMAPPINGRESPONSE_H
#define QTAWS_GETSTUDIOSESSIONMAPPINGRESPONSE_H

#include "emrresponse.h"
#include "getstudiosessionmappingrequest.h"

namespace QtAws {
namespace Emr {

class GetStudioSessionMappingResponsePrivate;

class QTAWSEMR_EXPORT GetStudioSessionMappingResponse : public EmrResponse {
    Q_OBJECT

public:
    GetStudioSessionMappingResponse(const GetStudioSessionMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStudioSessionMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStudioSessionMappingResponse)
    Q_DISABLE_COPY(GetStudioSessionMappingResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
