// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILEJOBRESPONSE_H
#define QTAWS_CREATEPROFILEJOBRESPONSE_H

#include "databrewresponse.h"
#include "createprofilejobrequest.h"

namespace QtAws {
namespace DataBrew {

class CreateProfileJobResponsePrivate;

class QTAWSDATABREW_EXPORT CreateProfileJobResponse : public DataBrewResponse {
    Q_OBJECT

public:
    CreateProfileJobResponse(const CreateProfileJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProfileJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProfileJobResponse)
    Q_DISABLE_COPY(CreateProfileJobResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
