// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSVERSIONDIFFERENCERESPONSE_H
#define QTAWS_GETLENSVERSIONDIFFERENCERESPONSE_H

#include "wellarchitectedresponse.h"
#include "getlensversiondifferencerequest.h"

namespace QtAws {
namespace WellArchitected {

class GetLensVersionDifferenceResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT GetLensVersionDifferenceResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    GetLensVersionDifferenceResponse(const GetLensVersionDifferenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLensVersionDifferenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLensVersionDifferenceResponse)
    Q_DISABLE_COPY(GetLensVersionDifferenceResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
