// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFEATURESRESPONSE_H
#define QTAWS_LISTFEATURESRESPONSE_H

#include "evidentlyresponse.h"
#include "listfeaturesrequest.h"

namespace QtAws {
namespace Evidently {

class ListFeaturesResponsePrivate;

class QTAWSEVIDENTLY_EXPORT ListFeaturesResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    ListFeaturesResponse(const ListFeaturesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFeaturesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFeaturesResponse)
    Q_DISABLE_COPY(ListFeaturesResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
