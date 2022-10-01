// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEMETADATARESPONSE_H
#define QTAWS_GETRESOURCEMETADATARESPONSE_H

#include "piresponse.h"
#include "getresourcemetadatarequest.h"

namespace QtAws {
namespace Pi {

class GetResourceMetadataResponsePrivate;

class QTAWSPI_EXPORT GetResourceMetadataResponse : public PiResponse {
    Q_OBJECT

public:
    GetResourceMetadataResponse(const GetResourceMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceMetadataResponse)
    Q_DISABLE_COPY(GetResourceMetadataResponse)

};

} // namespace Pi
} // namespace QtAws

#endif
