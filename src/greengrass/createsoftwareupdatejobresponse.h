// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOFTWAREUPDATEJOBRESPONSE_H
#define QTAWS_CREATESOFTWAREUPDATEJOBRESPONSE_H

#include "greengrassresponse.h"
#include "createsoftwareupdatejobrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateSoftwareUpdateJobResponsePrivate;

class QTAWSGREENGRASS_EXPORT CreateSoftwareUpdateJobResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateSoftwareUpdateJobResponse(const CreateSoftwareUpdateJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSoftwareUpdateJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSoftwareUpdateJobResponse)
    Q_DISABLE_COPY(CreateSoftwareUpdateJobResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
