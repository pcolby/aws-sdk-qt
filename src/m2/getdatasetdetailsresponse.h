// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETDETAILSRESPONSE_H
#define QTAWS_GETDATASETDETAILSRESPONSE_H

#include "m2response.h"
#include "getdatasetdetailsrequest.h"

namespace QtAws {
namespace M2 {

class GetDataSetDetailsResponsePrivate;

class QTAWSM2_EXPORT GetDataSetDetailsResponse : public M2Response {
    Q_OBJECT

public:
    GetDataSetDetailsResponse(const GetDataSetDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataSetDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataSetDetailsResponse)
    Q_DISABLE_COPY(GetDataSetDetailsResponse)

};

} // namespace M2
} // namespace QtAws

#endif
