// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEPORTSTATESRESPONSE_H
#define QTAWS_GETINSTANCEPORTSTATESRESPONSE_H

#include "lightsailresponse.h"
#include "getinstanceportstatesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstancePortStatesResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetInstancePortStatesResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetInstancePortStatesResponse(const GetInstancePortStatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstancePortStatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstancePortStatesResponse)
    Q_DISABLE_COPY(GetInstancePortStatesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
