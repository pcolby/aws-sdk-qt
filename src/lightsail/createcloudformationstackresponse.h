// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFORMATIONSTACKRESPONSE_H
#define QTAWS_CREATECLOUDFORMATIONSTACKRESPONSE_H

#include "lightsailresponse.h"
#include "createcloudformationstackrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateCloudFormationStackResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateCloudFormationStackResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateCloudFormationStackResponse(const CreateCloudFormationStackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCloudFormationStackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCloudFormationStackResponse)
    Q_DISABLE_COPY(CreateCloudFormationStackResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
