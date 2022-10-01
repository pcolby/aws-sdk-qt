// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKPROFILERESPONSE_H
#define QTAWS_DELETENETWORKPROFILERESPONSE_H

#include "alexaforbusinessresponse.h"
#include "deletenetworkprofilerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteNetworkProfileResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteNetworkProfileResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DeleteNetworkProfileResponse(const DeleteNetworkProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkProfileResponse)
    Q_DISABLE_COPY(DeleteNetworkProfileResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
