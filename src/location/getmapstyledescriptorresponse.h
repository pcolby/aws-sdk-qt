// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPSTYLEDESCRIPTORRESPONSE_H
#define QTAWS_GETMAPSTYLEDESCRIPTORRESPONSE_H

#include "locationresponse.h"
#include "getmapstyledescriptorrequest.h"

namespace QtAws {
namespace Location {

class GetMapStyleDescriptorResponsePrivate;

class QTAWSLOCATION_EXPORT GetMapStyleDescriptorResponse : public LocationResponse {
    Q_OBJECT

public:
    GetMapStyleDescriptorResponse(const GetMapStyleDescriptorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMapStyleDescriptorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMapStyleDescriptorResponse)
    Q_DISABLE_COPY(GetMapStyleDescriptorResponse)

};

} // namespace Location
} // namespace QtAws

#endif
