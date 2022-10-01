// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETMETADATARESPONSE_H
#define QTAWS_UPDATEFLEETMETADATARESPONSE_H

#include "worklinkresponse.h"
#include "updatefleetmetadatarequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateFleetMetadataResponsePrivate;

class QTAWSWORKLINK_EXPORT UpdateFleetMetadataResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    UpdateFleetMetadataResponse(const UpdateFleetMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFleetMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFleetMetadataResponse)
    Q_DISABLE_COPY(UpdateFleetMetadataResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
