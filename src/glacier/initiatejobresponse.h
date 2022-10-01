// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEJOBRESPONSE_H
#define QTAWS_INITIATEJOBRESPONSE_H

#include "glacierresponse.h"
#include "initiatejobrequest.h"

namespace QtAws {
namespace Glacier {

class InitiateJobResponsePrivate;

class QTAWSGLACIER_EXPORT InitiateJobResponse : public GlacierResponse {
    Q_OBJECT

public:
    InitiateJobResponse(const InitiateJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InitiateJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateJobResponse)
    Q_DISABLE_COPY(InitiateJobResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
