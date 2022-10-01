// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTPREFERENCESRESPONSE_H
#define QTAWS_PUTACCOUNTPREFERENCESRESPONSE_H

#include "efsresponse.h"
#include "putaccountpreferencesrequest.h"

namespace QtAws {
namespace Efs {

class PutAccountPreferencesResponsePrivate;

class QTAWSEFS_EXPORT PutAccountPreferencesResponse : public EfsResponse {
    Q_OBJECT

public:
    PutAccountPreferencesResponse(const PutAccountPreferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccountPreferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountPreferencesResponse)
    Q_DISABLE_COPY(PutAccountPreferencesResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
