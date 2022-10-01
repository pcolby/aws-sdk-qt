// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIORESPONSE_H
#define QTAWS_CREATESTUDIORESPONSE_H

#include "emrresponse.h"
#include "createstudiorequest.h"

namespace QtAws {
namespace Emr {

class CreateStudioResponsePrivate;

class QTAWSEMR_EXPORT CreateStudioResponse : public EmrResponse {
    Q_OBJECT

public:
    CreateStudioResponse(const CreateStudioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStudioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStudioResponse)
    Q_DISABLE_COPY(CreateStudioResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
