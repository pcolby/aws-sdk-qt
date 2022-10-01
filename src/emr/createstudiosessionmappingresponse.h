// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIOSESSIONMAPPINGRESPONSE_H
#define QTAWS_CREATESTUDIOSESSIONMAPPINGRESPONSE_H

#include "emrresponse.h"
#include "createstudiosessionmappingrequest.h"

namespace QtAws {
namespace Emr {

class CreateStudioSessionMappingResponsePrivate;

class QTAWSEMR_EXPORT CreateStudioSessionMappingResponse : public EmrResponse {
    Q_OBJECT

public:
    CreateStudioSessionMappingResponse(const CreateStudioSessionMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStudioSessionMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStudioSessionMappingResponse)
    Q_DISABLE_COPY(CreateStudioSessionMappingResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
