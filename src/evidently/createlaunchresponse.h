// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHRESPONSE_H
#define QTAWS_CREATELAUNCHRESPONSE_H

#include "evidentlyresponse.h"
#include "createlaunchrequest.h"

namespace QtAws {
namespace Evidently {

class CreateLaunchResponsePrivate;

class QTAWSEVIDENTLY_EXPORT CreateLaunchResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    CreateLaunchResponse(const CreateLaunchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLaunchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLaunchResponse)
    Q_DISABLE_COPY(CreateLaunchResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
