// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOMERGINGPREVIEWRESPONSE_H
#define QTAWS_GETAUTOMERGINGPREVIEWRESPONSE_H

#include "customerprofilesresponse.h"
#include "getautomergingpreviewrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetAutoMergingPreviewResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetAutoMergingPreviewResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    GetAutoMergingPreviewResponse(const GetAutoMergingPreviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAutoMergingPreviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAutoMergingPreviewResponse)
    Q_DISABLE_COPY(GetAutoMergingPreviewResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
