// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOSESSIONMAPPINGRESPONSE_H
#define QTAWS_DELETESTUDIOSESSIONMAPPINGRESPONSE_H

#include "emrresponse.h"
#include "deletestudiosessionmappingrequest.h"

namespace QtAws {
namespace Emr {

class DeleteStudioSessionMappingResponsePrivate;

class QTAWSEMR_EXPORT DeleteStudioSessionMappingResponse : public EmrResponse {
    Q_OBJECT

public:
    DeleteStudioSessionMappingResponse(const DeleteStudioSessionMappingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStudioSessionMappingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStudioSessionMappingResponse)
    Q_DISABLE_COPY(DeleteStudioSessionMappingResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
