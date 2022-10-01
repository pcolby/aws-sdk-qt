// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBMANIFESTRESPONSE_H
#define QTAWS_GETJOBMANIFESTRESPONSE_H

#include "snowballresponse.h"
#include "getjobmanifestrequest.h"

namespace QtAws {
namespace Snowball {

class GetJobManifestResponsePrivate;

class QTAWSSNOWBALL_EXPORT GetJobManifestResponse : public SnowballResponse {
    Q_OBJECT

public:
    GetJobManifestResponse(const GetJobManifestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJobManifestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobManifestResponse)
    Q_DISABLE_COPY(GetJobManifestResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
