// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSOFTWAREUPDATESRESPONSE_H
#define QTAWS_GETSOFTWAREUPDATESRESPONSE_H

#include "snowballresponse.h"
#include "getsoftwareupdatesrequest.h"

namespace QtAws {
namespace Snowball {

class GetSoftwareUpdatesResponsePrivate;

class QTAWSSNOWBALL_EXPORT GetSoftwareUpdatesResponse : public SnowballResponse {
    Q_OBJECT

public:
    GetSoftwareUpdatesResponse(const GetSoftwareUpdatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSoftwareUpdatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSoftwareUpdatesResponse)
    Q_DISABLE_COPY(GetSoftwareUpdatesResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
