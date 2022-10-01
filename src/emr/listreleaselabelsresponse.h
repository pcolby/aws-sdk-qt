// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRELEASELABELSRESPONSE_H
#define QTAWS_LISTRELEASELABELSRESPONSE_H

#include "emrresponse.h"
#include "listreleaselabelsrequest.h"

namespace QtAws {
namespace Emr {

class ListReleaseLabelsResponsePrivate;

class QTAWSEMR_EXPORT ListReleaseLabelsResponse : public EmrResponse {
    Q_OBJECT

public:
    ListReleaseLabelsResponse(const ListReleaseLabelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReleaseLabelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReleaseLabelsResponse)
    Q_DISABLE_COPY(ListReleaseLabelsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
