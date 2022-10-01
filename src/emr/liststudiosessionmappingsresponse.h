// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOSESSIONMAPPINGSRESPONSE_H
#define QTAWS_LISTSTUDIOSESSIONMAPPINGSRESPONSE_H

#include "emrresponse.h"
#include "liststudiosessionmappingsrequest.h"

namespace QtAws {
namespace Emr {

class ListStudioSessionMappingsResponsePrivate;

class QTAWSEMR_EXPORT ListStudioSessionMappingsResponse : public EmrResponse {
    Q_OBJECT

public:
    ListStudioSessionMappingsResponse(const ListStudioSessionMappingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStudioSessionMappingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStudioSessionMappingsResponse)
    Q_DISABLE_COPY(ListStudioSessionMappingsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
