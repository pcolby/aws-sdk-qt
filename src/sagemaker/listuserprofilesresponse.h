// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPROFILESRESPONSE_H
#define QTAWS_LISTUSERPROFILESRESPONSE_H

#include "sagemakerresponse.h"
#include "listuserprofilesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListUserProfilesResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListUserProfilesResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListUserProfilesResponse(const ListUserProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUserProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserProfilesResponse)
    Q_DISABLE_COPY(ListUserProfilesResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
