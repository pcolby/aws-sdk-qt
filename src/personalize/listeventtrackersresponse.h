// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTTRACKERSRESPONSE_H
#define QTAWS_LISTEVENTTRACKERSRESPONSE_H

#include "personalizeresponse.h"
#include "listeventtrackersrequest.h"

namespace QtAws {
namespace Personalize {

class ListEventTrackersResponsePrivate;

class QTAWSPERSONALIZE_EXPORT ListEventTrackersResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    ListEventTrackersResponse(const ListEventTrackersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventTrackersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventTrackersResponse)
    Q_DISABLE_COPY(ListEventTrackersResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
