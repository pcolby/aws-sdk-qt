// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDEVICESRESPONSE_H
#define QTAWS_SEARCHDEVICESRESPONSE_H

#include "braketresponse.h"
#include "searchdevicesrequest.h"

namespace QtAws {
namespace Braket {

class SearchDevicesResponsePrivate;

class QTAWSBRAKET_EXPORT SearchDevicesResponse : public BraketResponse {
    Q_OBJECT

public:
    SearchDevicesResponse(const SearchDevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchDevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchDevicesResponse)
    Q_DISABLE_COPY(SearchDevicesResponse)

};

} // namespace Braket
} // namespace QtAws

#endif
