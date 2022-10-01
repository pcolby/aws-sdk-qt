// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRESETSRESPONSE_H
#define QTAWS_LISTPRESETSRESPONSE_H

#include "mediaconvertresponse.h"
#include "listpresetsrequest.h"

namespace QtAws {
namespace MediaConvert {

class ListPresetsResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT ListPresetsResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    ListPresetsResponse(const ListPresetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPresetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPresetsResponse)
    Q_DISABLE_COPY(ListPresetsResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
