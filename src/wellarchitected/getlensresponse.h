// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSRESPONSE_H
#define QTAWS_GETLENSRESPONSE_H

#include "wellarchitectedresponse.h"
#include "getlensrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetLensResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT GetLensResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    GetLensResponse(const GetLensRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLensRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLensResponse)
    Q_DISABLE_COPY(GetLensResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
