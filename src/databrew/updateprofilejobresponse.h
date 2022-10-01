// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILEJOBRESPONSE_H
#define QTAWS_UPDATEPROFILEJOBRESPONSE_H

#include "databrewresponse.h"
#include "updateprofilejobrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateProfileJobResponsePrivate;

class QTAWSDATABREW_EXPORT UpdateProfileJobResponse : public DataBrewResponse {
    Q_OBJECT

public:
    UpdateProfileJobResponse(const UpdateProfileJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateProfileJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProfileJobResponse)
    Q_DISABLE_COPY(UpdateProfileJobResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
